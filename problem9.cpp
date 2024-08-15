// Union of Two sorted array

// Method 1
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int j = 0; j < m; j++)
    {
        st.insert(arr2[j]);
    }

    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}

// Method 2
vector<int> SortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> uinonArr;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
}