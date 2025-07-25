// week14-4.cpp
// UVA11063: B2-Sequence 
// Part1: Input, Part2: Output, Part3:
# include <stdio.h>
int main(){
    int a[100];
    int N,t = 1;
    while(scanf("%d",&N) == 1){ // Part1
        int bad = 0; // Part3: bad or not bad
        for(int i=0;i<N;i++){ // Part1
            scanf("%d",&a[i]); // Part1
            if(i>0 && a[i-1] >= a[i]) bad = 1; // Part5: bigger-bigger
        }
        if(a[0]<1) bad = 1; // Part3
        int table[20002] = {}; // Part6: table not equal
        for(int i=0;i<N;i++){
            for(int j=i;j<N;j++){
                int now = a[i] + a[j];
                if(table[now]>0) bad = 1; // Part6
                table[now]++;
            }
        }
        // Part2: Output , Part4: if(bad==0) else
        if(bad==0) printf("Case #%d: It is a B2-Sequence.\n\n",t);
        else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
        t++;
    }
}
