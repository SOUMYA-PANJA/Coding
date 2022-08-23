edge(a,f).
edge(a,b).
edge(f,g).
edge(f,e).
edge(f,c).
edge(g,c).
edge(b,c).
edge(c,e).
edge(c,d).
edge(e,d).
connected(X,Y):-edge(X,Y);edge(Y,X).
path(A,B,Path):-
    travel(A,B,[A],Q),
    reverse(Q,Path).
travel(A,B,P,[B|P]):-
    connected(A,B).
travel(A,B,Visited,Path):-
    connected(A,C),
    C\==B,
    \+member(C,Visited),
    travel(C,B,[C|Visited],Path).

