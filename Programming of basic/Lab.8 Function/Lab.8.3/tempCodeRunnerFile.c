nt N ;
    scanf("%d",&N);
    if(N == 1){
        printf("not prime");
    }
    else if (is_prime(N)){
        printf("prime");
    }
    else{
        printf("composite");
    }