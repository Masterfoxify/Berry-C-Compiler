#pragma once

enum Tokens {
	T_EOF,

	// Types
	T_STRING, T_CHAR, T_BYTE, T_BOOL, T_NULL, T_INT, T_INT8, T_INT16, T_INT64, T_UNSIGNED, T_FLOAT, T_VAR, T_FUNC,

	// Math
	ADD, SUB, MUL, DIV, MOD,

	// Byte
	GREATER, LESS, INV, COM,

	// Additives
	STATIC, REF, DEREF, NEW, DELETE, FINAL, GLOBAL, DECORATOR,

	// Functions and classes
	DEF, GET, SET, CLASS, EXTENDS, SELF, SUPER, ABSTRACT, INTERFACE, IMPLEMENTS, RETURN, HALT,

	// Conditionals
	IF, ELSE, ELIF, AND, OR, XOR, NOT, IS, IN,

	// Loops
	FOR, WHILE,

	// Errors
	ERROR, RAISE, TRY, EXCEPT,

	// Miscellaneous
	IMPORT, AS, ASSIGNMENT, OPEN_PAREN, CLOSED_PAREN, CURLY_OPEN, CURLY_CLOSED, METHOD_CALL, EOL
};