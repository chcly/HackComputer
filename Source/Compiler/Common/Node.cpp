/*
-------------------------------------------------------------------------------
    Copyright (c) Charles Carley.

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#include "Compiler/Common/Node.h"
#include <utility>
#include "Utils/Exception.h"

namespace Hack::Compiler
{
    Node::Node() :
        _parent(nullptr),
        _type(-1),
        _subtype(SubtypeNone),
        _line(0)

    {
    }

    Node::Node(const int8_t type, String fileName, size_t line) :
        _parent(nullptr),
        _type(type),
        _subtype(SubtypeNone),
        _fileName(std::move(fileName)),
        _line(line)
    {
    }

    Node::Node(int8_t type, String data, String fileName, size_t line) :
        _parent(nullptr),
        _type(type),
        _subtype(SubtypeNone),
        _data(std::move(data)),
        _fileName(std::move(fileName)),
        _line(line)
    {
    }

    Node::~Node()
    {
        for (Node* chi : _children)
            delete chi;
        _children.clear();
    }

    const Node& Node::check(const size_t idx, const int8_t symbolId, const bool generalCase) const
    {
        if (_children.contains(idx))
        {
            Node* node = _children.at(idx);

            // general
            if (generalCase)
                return *node;

            // specific
            if (node->isTypeOf(symbolId))
                return *node;
        }

        throw InputException("the filter check on the node ",
                             NodeUtils::string(_type),
                             " failed");
    }

    void Node::filter(NodeArray& dest, const int8_t symbolId) const
    {
        for (Node* node : _children)
        {
            if (node->_type == symbolId)
                dest.push_back(node);
        }
    }

    const Node& Node::rule(const size_t idx, const int8_t symbolId) const
    {
        return check(idx, symbolId, symbolId == Rule && isRule());
    }

    const Node& Node::keyword(const size_t idx, const int8_t symbolId) const
    {
        return check(idx, symbolId, symbolId == Keyword && isKeyword());
    }

    const Node& Node::constant(const size_t idx, const int8_t symbolId) const
    {
        const Node& nd = child(idx);
        if (symbolId == Constant && nd.isConstant())
            return nd;

        if (nd.isTypeOf(symbolId))
            return nd;

        throw NotFound();
    }

    const Node& Node::symbol(const size_t idx, const int8_t symbolId) const
    {
        return check(idx, symbolId, symbolId == Symbol && isSymbol());
    }

    const Node& Node::child(const size_t idx) const
    {
        if (idx < _children.size())
        {
            Node* node = _children.at(idx);

            if (!node)
                throw InvalidPointer();
            return *node;
        }

        throw InputException("the child index(", idx, ") is out of bounds");
    }

    void Node::insert(Node* node)
    {
        if (!node)
            throw InvalidPointer();

        _children.insert(node);
        node->_parent = this;
    }

    void Node::insert(const int8_t  type,
                      const String& data,
                      const String& fileName,
                      const size_t  line)
    {
        insert(new Node(type, data, fileName, line));
    }

    void Node::insert(const int8_t  type,
                      const String& fileName,
                      const size_t  line)
    {
        insert(new Node(type, fileName, line));
    }

    bool Node::isOperator() const
    {
        switch (_type)
        {
        case RuleOperator:
        case RuleUnaryOperator:
        case SymbolAnd:
        case SymbolOr:
        case SymbolPlus:
        case SymbolMinus:
        case SymbolMultiply:
        case SymbolDivide:
        case SymbolNot:
        case SymbolEquals:
        case SymbolGreater:
        case SymbolLess:
            return true;
        default:
            return false;
        }
    }
} // namespace Hack::Compiler
