filereader library
Interpret a file and make its contents accessible in a program

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

Identifier -> letter_ (letter_ | digit)*
String -> zero or more characters in between two "
Boolean -> 'true' | 'false'
List -> [ list of comma separated expressions ]

