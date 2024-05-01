function func1() {
    let text = document.getElementById("id1").innerText;
    if (text === "Learn JavaScript") {
        document.getElementById("id1").innerText = "";
    }
    else {
        document.getElementById("id1").innerText = "Learn JavaScript";
    }
}

function func2() {
    let text = document.getElementById("id2").innerText;
    if (text === "Learn Machine Learning") {
        document.getElementById("id2").innerText = "";
    }
    else {
        document.getElementById("id2").innerText = "Learn Machine Learning";
    }
}

document.addEventListener("click", func1);