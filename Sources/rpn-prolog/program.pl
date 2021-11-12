% -*- mode: Prolog; -*-

:- initialization(main).
:- initialization(halt).

evaluation([],Stack,Stack).
evaluation(['+'|ExprRest],[A,B|InputStackRest],Result) :-
	C is A + B,
	append([C],InputStackRest,Intermediate),
	evaluation(ExprRest,Intermediate,Result).
evaluation(['*'|ExprRest],[A,B|InputStackRest],Result) :-
	C is A * B,
	append([C],InputStackRest,Intermediate),
	evaluation(ExprRest,Intermediate,Result).
evaluation([N|ExprRest],InputStack,Result) :-
	append([N],InputStack,Intermediate),
	evaluation(ExprRest,Intermediate,Result).

main :-
	Expr = [5,4, '+', 7, 2, 3, '+', '*'],
	evaluation(Expr,[],Stack),
	write(Expr), write(' = '), write(Stack), nl.

% vim: set filetype=prolog:
