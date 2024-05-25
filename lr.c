#include "lr.h"
#include <stdio.h>
int lab1(){
float x;
    float P;
    float a;
    float b;
    printf("x=");
    scanf("%f",&x);
    a=x*x*x*x;
    b=x*x;
    P=a-3*b+11*x-8;
    printf("P=%f",P);
    return 0;
}
int lab2(){
float s;
float a;
float c;
float b;
float eps;
 int i;
 int sign;     printf("eps=");     scanf("%f", &eps);
s = 0;     sign=1;
 	i = 0;
c = 1;
b = 1;
 	a = c / b;     while( a > eps )
{         s=s+a*sign;         sign = -sign;

c = c + 1;         b = b * 2;         a = c / b;         i = i + 1;
    }
    printf("s = %f\n", s);

    return 0;
}
int lab2d(){
int main() {
float s;
float a;
float c;
float b;
float eps;
 int i;
 int sign;
 int N;
 printf("eps=");
 scanf("%f",&eps);
 printf("N = ");
 scanf("%d", &N);
s = 0;
sign=1;
i = 0;
c = 1;
b = 1;
a = c / b;
for (i = 0; i < N; i++)
{
    s=s+a*sign;
    sign = -sign;
    c = c + 1;
    b = b * 2;
    a = c / b;
    }
    printf("s = %f\n", s);

    return 0;
}
}
int lab3(){
    #define YES 1
    #define NO 0

    int c, flag, cnt, found;
    cnt = 0;
    flag = NO;
    found = NO;

    while((c = getchar()) != EOF )
    {
        if(c == 'a'||c == 'e'||c == 'y'||c=='u'||c=='i'||c=='o'){
            flag=YES;
        }
        if (c == ' '||c == '.'||c == ','||c == '\n') {
            if (flag==NO)  cnt++;
        flag = 0;
        }
    }
    printf("number of words = %d\n", cnt);
    return 0;
}
int lab3d(){
    int main()
    {
    char c;
    int flag, cnt, found,buk;
    cnt = 0;
    buk=0;
    flag = NO;
    found = NO;
    while( (c = getchar()) != EOF )
    {
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
    buk+=1;
    }
    if(c=='a'||c=='u'||c=='e'||c=='y'||c=='i'||c=='o'){
    flag=NO;
    }
    if(c=='.'||c==','||c=='\n'||c==' '){
    if(buk>3){
    if(flag==YES){
    cnt+=1;
    }
    buk=0;
    }
    flag=YES;
    }
    }
    printf("number of words = %d\n", cnt);
    return 0;
    }
}
int lab4(){
    int glas(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    int main() {
    char arr[1000];
    char res[1000];
    int gl, sogl, i, j, k;
    fgets(arr, sizeof(arr), stdin);
    i = j = k = gl = sogl = 0;
    while(arr[i] != '\0') {
        if((arr[i] >= 'a' && arr[i] <= 'z') ||
        (arr[i] >= 'A' && arr[i] <= 'Z')) {
            while((arr[i] >= 'a' && arr[i] <= 'z') ||
            (arr[i] >= 'A' && arr[i] <= 'Z')) {
                res[j++] = arr[i++];
                    if(glas(res[j-1])) {
                        gl++;
    }
    else {
    sogl++;
    }
    }
    if(gl <= sogl) {
        while(j > k) {
            printf("%c", res[k++]);
    }
    printf(" ");
    }
    j = k = gl = sogl = 0;
    } else {
    i++;
    }
    }

    printf("\n");

    return 0;
    }
}
int lab4d(){
    // Функция для определения является ли символ гласной буквой
    int glas(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    int main() {
    char arr[1000];
    char res[1000];
    char delres[1000];
    int gl, sogl, i, j, k,m;
    fgets(arr, sizeof(arr), stdin);
    i = j = k =m= gl = sogl = 0;
    // Проходим по каждому символу во входной строке
    while(arr[i] != '\0') {
    // Если символ буква
        if((arr[i] >= 'a' && arr[i] <= 'z') ||
        (arr[i] >= 'A' && arr[i] <= 'Z')) {
    // Если гласных больше или равно согласных, добавляем слово в выходную строку
            while((arr[i] >= 'a' && arr[i] <= 'z') ||
            (arr[i] >= 'A' && arr[i] <= 'Z')) {
                res[j++] = arr[i++];
                    if(glas(res[j-1])) {
                        gl++;
    }
    else {
    sogl++;
    delres[m++] = arr[i++];
    }
    }
    // Если число гласных больше числа согласных, пропускаем это слово
    if(gl <= sogl) {
        while(j > k) {
            printf("%c", res[k++]);
            printf("%c", delres[m++]);

    }
    printf(" ");
    }
    j = k = gl = sogl=m = 0;
    } else {
    i++;
    }
    }

    printf("\n");

    return 0;
    }
}
int lab5(){
    int main() {
    int arr[10];
    int cntne=0,cntchet=0, i;
    for (i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2!=0){
            cntne+=1;
        }else{
        cntchet+=1;
        }
    }
        for (i=0;i<10;i++){
            if(cntne<cntchet){
                    if(arr[i]%2!=0){
                        arr[i]='\0';
                    }
            }else{
                if(cntne>cntchet){
                        if(arr[i]%2==0){
                        arr[i]='\0';
                    }
                    }
            }
            printf("%d ",arr[i]);
        }
        return 0;
    }
}
int lab5d(){
int main() {
    int arr[10];
    int cntne=0,cntchet=0, i;
    if (arr[i]<=arr[i+1]){
        for (i=0;i<10;i++){
            scanf("%d", &arr[i]);
            if(arr[i]%2!=0){
                cntne+=1;
            }else{
            cntchet+=1;
            }
        }
        for (i=0;i<10;i++){
            if(cntne<cntchet){
                    if(arr[i]%2!=0){
                        arr[i]='\0';
                    }
            }else{
                if(cntne>cntchet){
                        if(arr[i]%2==0){
                        arr[i]='\0';
                    }
                    }
            }
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
}
int lab6(){
    int main() {
    int N=4,K=4;
    int arr[N][K];
    int maxs = 0;
    int maxi = 0;
    int maxj = 0;
    //для того чтобы при каждом запуске менялись элементы
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            scanf("%d", &arr[i][j]); //рандомное заполнение от 1 до 99
        }
    }
    // Находим диагональ с максимальной суммой элементов
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
            int sum = 0;
            int isum = i;
            int jsum = j;
            while (isum < N && jsum < K) {
                sum += arr[isum][jsum];
                isum++;
                jsum++;
            }
            if (sum > maxs) {
                maxs = sum;
                maxi = i;
                maxj = j;
            }
        }printf("\n");
    }printf("\n");

    // Обнуляем элементы на найденной диагонали
    int i = maxi;
    int j = maxj;
    while (i < N && j < K) {
        arr[i][j] = 0;
        i++;
        j++;
    }

    // Выводим обновленный массив
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}
int lab6d(){
    int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int total = n * k;
    int arr[n][k];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (arr[j / k][j % k] > arr[(j + 1) / k][(j + 1) % k]) {
                int temp = arr[j / k][j % k];
                arr[j / k][j % k] = arr[(j + 1) /k][(j + 1) % k];
                arr[(j + 1) / k][(j + 1) % k] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}
int lab7(){
    int main() {
    long long N, K;
    scanf("%lld %lld", &N, &K);

    // Запись числа N в строку
    char str[100];
    sprintf(str, "%lld", N);

    // Длина числа N
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Сдвиг числа N на K разрядов вправо
    K %= len;
    for (int i = 0; i < K; i++) {
        char temp = str[len - 1];
        for (int j = len - 1; j > 0; j--) {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }

    // Вывод результата
    printf("%s\n", str);

    return 0;
}
}

