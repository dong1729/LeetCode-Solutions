#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map dùng để lưu: Key là giá trị của số, Value là vị trí (index) của nó
        std::unordered_map<int, int> hash_map;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Tìm xem số bù (complement) đã xuất hiện trước đó chưa
            if (hash_map.find(complement) != hash_map.end()) {
                // Nếu thấy, trả về index của số đã lưu và index hiện tại
                return {hash_map[complement], i};
            }
            
            // Nếu chưa thấy, lưu số hiện tại vào map để làm "mảnh ghép" cho các số sau
            hash_map[nums[i]] = i;
        }
        
        return {}; // Theo đề bài luôn có 1 đáp án nên dòng này ít khi chạy tới
    }
};
