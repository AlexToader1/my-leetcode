// Last updated: 11/27/2026, 12:16:30 AM
bool lemonadeChange(int* bills, int billsSize) {
    int billcount[3]={0, 0, 0};

    for(int i=0;i<billsSize;i++)
    {
        int change=bills[i]-5;

        if(bills[i]==5) billcount[0]++;
        if(bills[i]==10) billcount[1]++;

        if(billcount[1] && change==15)
        {
            billcount[1]--; 
            change-=10;
        }

        while(billcount[0] && change>0)
        {
            billcount[0]--;
            change-=5;
        }

        if(change) return false;
    }

    return true;
}