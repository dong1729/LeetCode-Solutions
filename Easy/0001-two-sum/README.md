# 0001 - Two Sum (Easy)

## 🔗 Link bài tập
[LeetCode - Two Sum](https://leetcode.com/problems/two-sum/)

## 📖 Đề bài tóm tắt
Cho một mảng số nguyên `nums` và một số `target`. Tìm vị trí (index) của hai số trong mảng sao cho tổng của chúng bằng `target`.

## 💡 Ý tưởng giải quyết
Sử dụng **Hash Map** (`std::unordered_map`) để lưu trữ các giá trị đã đi qua.
1. Với mỗi số `nums[i]`, tính số cần tìm là `complement = target - nums[i]`.
2. Kiểm tra `complement` có trong Map chưa.
3. Nếu có, trả về cặp index. Nếu chưa, lưu `nums[i]` vào Map.

## 📊 Độ phức tạp
- **Thời gian:** $O(n)$ - Do chỉ duyệt mảng một lần.
- **Không gian:** $O(n)$ - Trường hợp xấu nhất cần lưu $n$ phần tử vào Map.

## 💻 Mã nguồn
- [C++ Solution](./solution.cpp)
- [Python Solution](./solution.py)
