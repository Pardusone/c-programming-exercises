#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    
    do {
        printf("Lutfen ucgene ait kenar uzunluklarini giriniz:\n");
        scanf("%d %d %d", &a, &b, &c);
        
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            if (a == b && b == c) {
                printf("Bu bir eskenar ucgendir.\n");
            }
            else if (a == b || b == c || a == c) {
                printf("Bu bir ikizkenar ucgendir.\n");
            }
            else {
                printf("Bu bir cesitkenar ucgendir.\n");
            }
        }
        else {
            printf("Bu bir ucgen olusturmaz.\n");
        }
    } while (a + b > c);

    return 0;
}
