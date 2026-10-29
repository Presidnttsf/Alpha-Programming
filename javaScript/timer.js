    
    let timer = setInterval(()=>{
        let date = new Date();
    let hours = date.getHours();
    let min = date.getMinutes().toString().padStart(2, 0);
    let seconds = date.getSeconds().toString().padStart(2, 0);

    console.log(hours + ":" + min + ":" + seconds)

    },1000);


    setTimeout(()=>clearInterval(timer), 10000);
