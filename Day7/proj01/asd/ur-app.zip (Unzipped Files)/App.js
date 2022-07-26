import React from 'react';
import './App.css';

function Profile(props){
  return (
    <div>
      <h1>{`대학은  ${props.name}입니다.`}</h1>
      <h2>{`${props.introduction}`}</h2>
      <h3>{`조회수는 ${props.viewCount}회 입니다`}</h3>
    </div>
  )
}

function App(props) {
  return (
  <div>
    <Profile name="인하" introduction="안녕" viewCount={1500}/>
    <Profile name="경기" introduction="Hi" viewCount={570}/>
    <Profile name="성균관" introduction="Hello" viewCount={1100}/>
  </div>
  );
  // return (
  // <Profile 
  // name="인하" 
  // introduction="안녕 인하" 
  // viewCount={1500} />  
  // );
}

export default App;
