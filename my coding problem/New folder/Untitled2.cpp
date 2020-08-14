/*

nuv adigindhaiki -1000<=arr[i]<=1000

hash[(1000-(-1000))+1] = {0};

hash[2001] ={0};

 example ki arr[i]= -1000;

 actually ga -1000 hash[0] lo vundalee and element oka frequency vuntadhi

antey hash[0] ela mention chesthamu antey hash[]

o index add arr[i]+1000 equal avuthey range lo vunna 1st element -1000 first hash index loki vasthadhi 
alagey -1000 = 0 index aythe
-999 1 index loki 
-998 2 index loki
.
.
.
. 
1000 element 2000 index loki ravalee 


ala ravale antey manam chinna modify cheyalee 

cnt[arr[i]]++ ani postive number ki work avudhii negative kuda work avalee but array index negative lo vundau kabbatii nuv array negative index ni postive index ga 
convert cheyalee

so range  o tho substract cheyalee least element  ha number ni hash hlo add cheyalee 0-(-1000) = 1000 so 1000 add cheyalee
cnt[arr[i]+1000] = cnt[0] avudhi 

*/

