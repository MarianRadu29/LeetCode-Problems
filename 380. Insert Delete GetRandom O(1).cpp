#include"headers.h"

class RandomizedSet {
    vector< int> randomset;
public:
    RandomizedSet() {
        std::srand(std::time(nullptr));
    }

    bool insert(int val) {
        if (randomset.empty() == true)
        {
            randomset.push_back({val });
        }
        else
        {
            for (auto p : randomset)
            {
                if (p == val)
                {
                    //cout << "INSERT: size=" << randomset.size() << '\n';
                    return false;
                }
            }
            randomset.push_back({val });
        }
        //cout << "INSERT: size=" << randomset.size() << '\n';
        return true;
    }

    bool remove(int val) {
        for (int i=0;i<randomset.size();i++)
        {
            if (randomset[i] == val)
            {
                randomset.erase(randomset.begin()+i);
                //cout << "REMOVE: size=" << randomset.size() << '\n';
                return true;
            }
        }
        //cout << "REMOVE: size=" << randomset.size() << '\n';
        return false;
    }

    int getRandom() {
        int index = rand() % randomset.size();
        return randomset.at(index);
    }
};