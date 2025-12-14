let boxes = document.querySelectorAll(".box");
let restbtn= document.querySelector("#resert");
let newgamebtn= document.querySelector("#new-btn");
let msgContainer = document.querySelector(".msgContainer");
let msg=document.querySelector("#msg");

let trueo = true;

const winPatterns =[
   
     [0,1,2], 
      [0,3,6],
       [0,4,8],
        [1,4,7],
         [2,5,8],
          [2,4,6],
           [3,4,5],
            [6,7,8],
];
const resetgame = ()=>{
 trueo = true;
 enableboxes();
 msgContainer.classList.add("hide");

};
boxes.forEach((box) => {
    box.addEventListener("click",()=>{
        console.log("box was click ");
        if(trueo){
            box.innerText="O";
        trueo= false;
        }else{
            box.innerText="X";
            trueo=true;
        }
        box.disable="true";

        checkWinner();
    });

});

const disableboxes =() =>{
    for(let box of boxes){
        box.disabled = true;
    }
};
const enableboxes =() =>{
    for(let box of boxes){
        box.disabled = false;
        box.innerText = "";
    }
};
const showwinner = (winner) => {
    msg.innerText =`conguration ,Winner is ${winner}`;
    msgContainer.classList.remove("hide");
    disableboxes();
};

const checkWinner=()=>{
    for(let pattern of winPatterns){
       
       let pos1val = boxes[pattern[0]].innerText;
         let pos2val= boxes[pattern[1]].innerText;
        let pos3val= boxes[pattern[2]].innerText;

            if(pos1val != "" && pos2val != "" && pos3val !=""){
            if(pos1val === pos2val&& pos2val === pos3val){
                console.log("winner");
                showwinner(pos1val);
            }
            }

    }
};
newgamebtn.addEventListener("click",resetgame);
reset.addEventListener("click",resetgame);