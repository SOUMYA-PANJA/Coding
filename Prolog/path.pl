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
edge(X,Y):-
    tedge(X,Y).
tedge(N1,N2):-
    edge(N1,SN),
    edge(SN,N2).
