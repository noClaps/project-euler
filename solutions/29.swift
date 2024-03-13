func restructure(_ a: [Int]) -> [Int] {
    var arr = a

    while arr.contains(where: {$0 >= 10}) {
        for i in stride(from: arr.endIndex-1, through: 0, by: -1) {
            let powOf10 = Int(arr[i] / 10)
            if arr[i] >= 10 && i > 0 {
                arr[i-1] += powOf10
                arr[i] -= powOf10 * 10
            } else if arr[i] >= 10 && i == 0 {
                arr[i] -= powOf10 * 10
                arr.insert(powOf10, at: 0)
            }
        }
    }

    return arr
}

func pow(_ base: Int, _ exponent: Int) -> [Int] {
    var num = [1]

    for _ in 1...exponent {
        for i in 0...num.count-1 {
            num[i] *= base
        }
        num = restructure(num)
    }

    return num
}

var nums: Set<[Int]> = []
for a in 2...100 {
    for b in 2...100 {
        nums.insert(pow(a, b))
    }
}

print(nums.count)
// 9183
