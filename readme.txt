filereader library
Interface with a file written in a special format.

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

Example:

; this is a comment
;another comment
a := "hello"
b := 3.14
c := 42
d := true
e := [a, b, c, d, e, "f", [1.2, 3.4]]
