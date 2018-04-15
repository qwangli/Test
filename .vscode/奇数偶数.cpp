let n = 41
let list = [2] // 记录下已经算入乘积的数
let result = 1
function test (arr, target) { // 获得target与arr里的数依次除的结果
    let i = 0, len = arr.length
    while(target !== 1 && i < len) {
        let temp = arr[i]
        if (target % temp === 0) {
            target /= temp
        }
        i++
    }
    return target
}
for(let i = 3; i <= n; i++) {
    let ret = test(list, i)
    if (ret !== 1) {
        list.push(ret)
    }
}
for(let i = list.length - 1; i >= 0; i--) {
    result *= list[i]
    result %= 987654321
}
