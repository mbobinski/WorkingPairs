int max(int *tab, int rozmiar)
{
	int max = tab[0];
	for(int i=1;i<rozmiar;i++)
	{
		if(max < tab[i]) max = tab[i];
	}
	
	return max;
}