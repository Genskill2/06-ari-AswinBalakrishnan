string ari(string x){
 int c=0,w=0,s=0;
  for(int i=0;i<strlen(x);i++){
   if(isalnum(x[i]))
       c++;
   if(x[i]==' ')
     w++;
   if(x[i]=='.' || x[i]=='?')
    s++;
   if(x[i]=='!')
     s++;   }
   printf("%i %i %i \n",c,w,s);
    float index= 4.71*(float)c/w + 0.5*(float)w/s -21.43;
    int ARI=ceil(index);
    printf("%f %i\n",index,ARI);
    

    switch(ARI) { 
    case 1:printf("Kindergarten");
           break;
    case 2:printf("First/Second Grade");
           break;
    case 3:printf("Third Grade");
           break;
    case 4:printf("Fourth Grade");
           break;
    case 5:printf("Fifth Grade");
           break;                            
    case 6:printf("Sixth Grade");
           break;       
    case 7:printf("Seventh Grade");
           break;
    case 8:printf("Eighth Grade");
           break;       
    case 9:printf("Ninth Grade");
           break;
    case 10:printf("Tenth Grade");
           break;
    case 11:printf("Eleventh Grade");
           break;
    case 12:printf("Twelfth grade");
           break;
    case 13:printf("College student");
           break;
    case 14:printf("Professor");
           break;  
    default:printf("Not in the list");
           break;                  
           }
          } 
