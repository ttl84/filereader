#ifndef AST_h
#define AST_h
#include <vector>
#include <memory>
#include "Token.h"
// Abstract syntax tree node
struct AST final{
	// type info
	enum class Type{
		TOP, ASSIGNMENT, 
		IDENTIFIER, REAL, INTEGER, BOOLEAN, STRING, 
		LIST, 
		ERROR
	} type;
	
	// first token of the node
	Token start;
	
	// children and parent methods
	// add a new children to the end of the children list
	void append(AST * child);
	
	// get pointer to parent, or nullptr if tree is root
	AST * getParent();
	
	// get pointer to child by number
	std::unique_ptr<AST> & child(unsigned i);
	
	
	
	// constructors
	AST(Type nodeType, Token nodeStart)
		:type(nodeType), start(nodeStart),parent(nullptr){}
private:
	AST * parent;
	std::vector<std::unique_ptr<AST>> children;

public:
	// iterate through children
	auto begin(void) -> decltype(children.begin())
	{
		return children.begin();
	}
	auto end(void) -> decltype(children.begin())
	{
		return children.end();
	}
	
};

#endif
