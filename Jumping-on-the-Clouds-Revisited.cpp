int jumpingOnClouds(vector<int> c, int k)
{
    int energy = 100;
    int n = c.size();
    int i = 0;
   
    while (1)
    {
        i = (i + k) % n;
        energy -= c[i] * 2 + 1;
        if (i == 0) break;
    }
        
    return energy;
}
