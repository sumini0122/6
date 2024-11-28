#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;
    int size;

    printf("배열의 크기를 설정하십시오");
    scanf("%d", &size);
    

    p = (int*)malloc(size * sizeof(int));
    if (p == NULL){
        fprintf(stderr, "메모리가 부족해서 할당할 수 없음");
        exit(1);
    }
    for (int i = 0; i<size; i++)
        p[i] = i;

    for (int i = 0; i < size; i++)
        printf("%d", p[i]) ;
    free(p);
}