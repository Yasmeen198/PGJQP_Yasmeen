<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>HibernateApp</title>
<style type="text/css">
    body{        
        padding-top: 60px;
        padding-bottom: 40px;
        background: aqua;
    }
    .fixed-header, .fixed-footer{
        width: 100%;
        position: fixed;        
        background: darkblue;
        padding: 10px 0;
        color: #fff;
    }
    .fixed-header{
        top: 0;
    }
    .fixed-footer{
        bottom: 0;
    }
    .container{
        width: 80%;
        margin: 0 auto; /* Center the DIV horizontally */
    }
    nav a{
        color: #fff;
        text-decoration: none;
        padding: 7px 25px;
        display: inline-block;
    }
</style>
</head>
<body>
    <div class="fixed-header">
        <div class="container">
            <nav>
                <a href="index.jsp">Home</a>
                <a href="#">About Us</a>
               
                <a href="#">Admissions</a>
                <a href="#">Contact Us</a>
                <a href="#">CourseDetails</a>
                <a href="#">Sign In</a>
                  <a href="#">Sign Up</a>
            </nav>
        </div>
    </div>  
    <div class="fixed-footer">
        <div class="container">Copyright &copy; 2018 Grant University</div>        
    </div>

</body>
</html>