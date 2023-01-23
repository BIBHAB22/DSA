#include<stdio.h>
void toh(int n,char from_rod,char to_rod,char aux_rod){
    if(n==0){
        return ;
    }
    else{
    toh(n-1,from_rod,aux_rod,to_rod);
    printf("Move disk %d %c from %c to %c",n,from_rod,to_rod);
    toh(n-1,aux_rod,to_rod,from_rod);   
	}
}
int main(){
	toh(3,'A','C','B');
	return 0;
}
