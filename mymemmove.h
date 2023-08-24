void mymemmove(int *des,int *src,int size)
 {      
       int i;	
	size = size/4;
	for(i=0; i<size;i++)
		des[i]=src[i];
}
