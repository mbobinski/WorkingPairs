int min(int *tab, int rozmiar)
{
	int min = tab[0];
	for(int i=1;i<rozmiar;i++)
	{
		if(min > tab[i]) min = tab[i];
	}
	
	return min;
}
