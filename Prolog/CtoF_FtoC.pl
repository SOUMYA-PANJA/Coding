avg_temp(boral,34).
avg_temp(sonarpur,37).
a_t_c(L,F):-
    avg_temp(L,C),
    F is (C*(9/5)+32).

