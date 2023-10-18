for(int i=0;i<num;i++){  
17:            printf("\nGRAMMAR : : : %s",production[i]);  
18:            non_terminal=production[i][0];  
19:            if(non_terminal==production[i][index]) {  
20:                 alpha=production[i][index+1];  
21:                 printf(" is left recursive.\n");  
22:                 while(production[i][index]!=0 && production[i][index]!='|')  
23:                      index++;  
24:                 if(production[i][index]!=0) {  
25:                      beta=production[i][index+1];  
26:                      printf("Grammar without left recursion:\n");  
27:                      printf("%c->%c%c\'",non_terminal,beta,non_terminal);  
28:                      printf("\n%c\'->%c%c\'|E\n",non_terminal,alpha,non_terminal);  
29:                 }  
30:                 else  
31:                      printf(" can't be reduced\n");  
           }  
            else  
                 printf(" is not left recursive.\n");  
            index=3;  
       }  
