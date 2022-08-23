vowel(X):-member(X,[a,e,i,o,u]).
c_vow([],0).
c_vow([X|T],N):-
    vowel(X),
    c_vow(T,N1),
    N is N1+1,!.
c_vow([_|T],N):-c_vow(T,N).
