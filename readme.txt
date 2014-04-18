filereader library
Reads a file, and interpret its contents.

Grammar:
S -> Statement*

Statement -> Assignment
Assignment -> Identifier ':=' Expression

Expression -> Identifier |
		String |
		Integer | 
		Real | 
		Boolean |
		List

Identifier -> start with underscore or letter,
	then followed by zero or more underscore or letter or digit
String -> zero or more characters in between two "
Integer -> one or more digit
Real -> decimal real number,, optionally in scientific notation
Boolean -> 'true' | 'false'
List -> '[' (Expression ',')* Expression ']'

