@import url('https://fonts.googleapis.com/css2?family=Roboto:wght@300&display=swap');
body {
  font-family: 'Roboto', sans-serif;
  font-weight: 300;
  background-color: rgb(19, 22, 115);
  color: #fff;
  overflow: visible;
}

h1,
h2,
h3,
h4,
h5,
h6  {
  font-weight: 300;
  color: white;
}

#wrapper {
  display: flex;
  flex-direction: row;
}

#left {
  display: flex;
  flex: 1;
}

#right {
  flex: 1;
}

----------------------------------
<!DOCTYPE html>
<html lang="en-TR">
<html>
  <head>
    <link rel="stylesheet" href="cssOfPage.css">
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title> Sign-in  SluralPright</title>
  </head>
  <body>
    <div id="wrapper">
      <div id="left">
         <div id="signin">
            <div class="logo">
              <img src="login-logo.png" alt="sluralPrightLogo">
            </div>
            <form>
               <label>Email or Username</label><br/>
               <input type="text" class="text-input"><br/> 
               <label>Password</label><br/>
               <input type="password" class="text-input"><br/>
               <input type="submit" value="Sign In" class="primary-btn">
            </form>
            <div id="links">
               <a href="#">Forgot Password</a></br>
               <a href="#">Sign in with Company or School</a>
            </div>
            <div class="OR">
              <hr class="bar">
              <span>OR</span>
              <hr class="bar">
            </div>
            <a href="#" class="secondary-btn">Create an Account</a>
          </div>  
          <footer id="main-footer">
            <p>Copyright &copy; 2022, SluralPright All Rights Reserved</p>
            <div>
               <a href="#"> Terms Of Use</a> | <a href="#">Privacy Policy</a>
            </div>
          </footer>
      </div>
      <div id="right">
        <div id="showcase">
          <div class="showcase-content">
            <h1 class="showcase-text">Let's Create Future <strong>Together</strong></h1>
            <a href="#" class="secondary-btn">Start a Free 10-days trial</a>
          </div>
        </div>	
      </div>	
    </div>
  </body>
</html>


