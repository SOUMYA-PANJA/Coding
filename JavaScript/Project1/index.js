time = ()=>{
    let a = new Date()
    let b = a.getHours()+":"+a.getMinutes()+":"+a.getSeconds();
    let c = a.toLocaleDateString();
    document.getElementById("time").innerText = b+"  \n Date:"+c;
}

setInterval(time, 50);
