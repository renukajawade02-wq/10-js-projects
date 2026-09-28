const quotes=["Be yourself", "everyone else is already taken — Oscar Wilde","Life is really simple, but we insist on making it complicated. — Confucius","The happiness of your life depends on the quality of your thoughts — Marcus Aurelius","In three words I can sum up everything I've learned about life: it goes on — Robert Frost","Life is about making an impact, not making an income. — Kevin Kruse"]


const button= document.querySelector('button');
const quote= document.querySelector('h1');

button.addEventListener('click', ()=>{
    const index=Math.floor(Math.random()*20);

    quote.textContent= quotes[index];
})