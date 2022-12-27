#include <bits/stdc++.h>

int main(){
    char pw[20];
    int upr = 0, abj = 0, num = 0, special = 0, lwr = 0;
    scanf("%s", pw);
    int pj = strlen(pw);
    for (int i = 0; i < pj; i++){
        if (pw[i] >= 'A' && pw[i] <= 'Z'){
            upr++;
            abj++; 
        }
        else if (pw[i] >= 'a' && pw[i] <= 'z'){
            lwr++;
            abj++;
        }
        else if (pw[i] >= '0' && pw[i] <= '9') num++;
        else if (pw[i] == '_' || pw[i] == '!' || pw[i] == '?') special++;
        
    }
    if (pj >= 8 && upr > 0 && abj > 0 && num > 0 && special > 0 && lwr > 0){
        printf("Kuat");
    }
    else if (abj >= 12) printf("AgakKuat");
    else printf("Lemah");
    

    return 0;
}