# [0001. Two Sum](https://leetcode.com/problems/two-sum/)

## 📝 Mô tả bài toán
(Copy ngắn gọn đề bài hoặc tóm tắt ý chính tại đây)

## 💡 Ý tưởng giải quyết
- **Hướng tiếp cận:** Sử dụng Hash Map để tối ưu thời gian tìm kiếm số bù (complement).
- **Các bước thực hiện:**
  1. Khởi tạo một Map trống.
  2. Duyệt qua mảng, tính `target - nums[i]`.
  3. ...

## 📊 Độ phức tạp
- **Thời gian:** $O(n)$ - Duyệt mảng một lần.
- **Không gian:** $O(n)$ - Lưu trữ tối đa $n$ phần tử trong Map.

## 💻 Mã nguồn
- [C++ Solution](./solution.cpp)
- [Python Solution](./solution.py)
