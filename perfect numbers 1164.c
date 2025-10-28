                                                                #include <stdio.h>

                                                                int main()

                                                                {
                                                                    int num,divsr,i,n, perfect,sum;

                                                                    scanf("%d", &n);
                                                                        for(i=1; i<=n; i++){
                                                                            scanf("%d", &num);
                                                                                sum=0;

                                                                                for(divsr=1; divsr<num; divsr++){
                                                                                    if(num%divsr==0){
                                                                                    sum+=divsr;
                                                                                    }
                                                                                }
                                                                                    if(sum==num){
                                                                                        printf("%d eh perfeito\n", num);
                                                                                        }
                                                                                        else{
                                                                                        printf("%d nao eh perfeito\n", num);
                                                                                    }
                                                                                }
                                                                    return 0;
                                                                }


