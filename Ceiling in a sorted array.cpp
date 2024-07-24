vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int flr = -1, ce = -1;
        sort(arr.begin(), arr.end());
        int st = 0, en = arr.size()-1;
        while(st <= en)
        {
            int mi = (st + en) / 2;
            if(arr[mi] <= x)
            {
                flr = arr[mi];
                st = mi+1;
            }else
                en = mi-1;
        }
        st = 0, en = arr.size()-1;
        while(st <= en)
        {
            int mi = (st + en) / 2;
            if(arr[mi] >= x)
            {
                ce = arr[mi];
                en = mi-1;
                
            }else
                st = mi+1;
        }
        vector<int> vect = {flr, ce};
        return vect;
    }
