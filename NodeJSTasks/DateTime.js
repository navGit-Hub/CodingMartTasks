const date = new Date();

const formatData = (input) => {
if (input > 9) {
	return input;
} else return `0${input}`;
};


const formatHour = (input) => {
return input>12?input-12:input;
};

function currentDay(day)
{

switch(day)
{
    case 1:return "Monday";
    case 2: return "Tuesday";
    case 3: return "Wednesday";
    case 4: return "Thursday";
    case 5:return "Friday";
    case 6:return "Saturday";
    case 7:return "Sunday";
    default: return "Invalid Day!!";
}

}

function getAmPm(hours)
{
 
return hours>=0 && hours<=11?"AM":"PM";

}

const format = {
dd: formatData(date.getDate()),
mm: formatData(date.getMonth() + 1),
yyyy: date.getFullYear(),
HH: formatData(date.getHours()),
hh: formatData(formatHour(date.getHours())),
MM: formatData(date.getMinutes()),
SS: formatData(date.getSeconds()),
day:date.getDay()
};
const format24Hour = ({ dd, mm, yyyy, HH, MM, SS,day }) => {
console.log(`${currentDay(day)}->${dd}/${mm}/${yyyy}->${HH}:${MM}:${SS}`);
};
const format12Hour = ({ dd, mm, yyyy, hh, MM, SS,day,HH }) => {
console.log(`${currentDay(day)}->${dd}/${mm}/${yyyy}->${hh}${getAmPm(HH)}:${MM}:${SS}`);
};


format24Hour(format);

format12Hour(format);

