/*
Name:Otieno Samwel Amos
Reg no: CT101/G/21435/24
*/
//c array -2D array
int main(){
	int a, b;
	float scores[2][2][2] = { {65, 92, 84, 72} , {35, 70, 59, 70} };
	for(a=0; a<2; a++){
		for(b=0; b<2; b++){
			printf("scores[%d][%d] = %d \n", a, b, scores[a][b]);
			
		}
	}
	return 0;
}