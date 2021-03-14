func bubblesort(_ test : inout[Int])-> [Int] {   //氣泡排序法
    var temp:Int
    for _ in 0...test.count{
    for count in 0...test.count-2{   
       if(test[count]>test[count+1])
       {
           temp=test[count]
           test[count]=test[count+1]
           test[count+1]=temp
       }     
    }
    }
    return test
    }
var test1=[99,88,44,55,77,66,33,22,11]
print(bubblesort(&test1)) // {11,22,33,44,55,66,77,88,99}

  
func minMax(array:[Int])->(min:Int,max:Int){ //取最大最小
    var cmin = array[0]
    var cmax = array[0]
    for value in array[0..<array.count]
    {
if value < cmin{
    cmin=value
}
else if value > cmax
{

    cmax=value
}
    }
    return (cmin,cmax)
}
var bounds=minMax(array:[8,-7,28,33,45])
print("\(bounds.min) and \(bounds.max)")

varible(members:4,5,83,24)

func varible<N>(members: N...){
    for i in members{
        print(terminator:"\(i) ")
    }
}

func change(_ v1:inout Int , _ v2:inout Int)->(Int,Int){ //數值互換
        var temp:Int
        temp=v1
        v1=v2
        v2=temp
        return (v1,v2)
}
var v1=2
var v2=10
print(change(&v1,&v2))


//    ****/5*    
let str = "abcde"  //(String)
var number=[UInt32](repeating:0 ,count:str.count/*字串長度*/)// 有預設值的陣列   
var count = 0//計數陣列索引值

// <---unicode Scalars.jpg
for code in str.unicodeScalars {  //存取Unicode純量,重複str的字串長度次數  
    number[count] = code.value    
        switch number[count] {   //switch basic
    case  97,101,108,111,117 : //ASCII碼
    print("\(code) is a vowel")//母音
    default:
    print("\(code) is not a vowel")   
}    
count+=1
}


