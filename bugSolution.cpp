std::vector<int> vec = {1, 2, 3, 4, 5};

// Correct approach using iterator
for (auto it = vec.begin(); it != vec.end(); ) {
    if (*it == 3) {
        it = vec.erase(it);
    } else {
        ++it;
    }
}

//Alternative using remove-erase idiom
//vec.erase(std::remove(vec.begin(), vec.end(), 3), vec.end());