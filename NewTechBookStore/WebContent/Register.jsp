<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>New Tech Book Store</title>
</head>
<body>
<center>
		<u><h1>New Tech Book Store</h1></u>
	</center>
	<center>
		<u><h2>Register Yourself</h2></u>
	</center>
	<form method="post" action="Register">
		<table>
			<tr>
				<td>First Name</td>
				<td><input type="text" name="fname" /></td>
			</tr>
			<tr>
				<td>Last Name</td>
				<td><input type="text" name="lname" /></td>
			</tr>
			<tr>
				<td>Gender</td>
				<td><input type="radio" name="gender" value="Male">Male</td>
				<td><input type="radio" name="gender" value="Female">Female</td>
			</tr>
			<tr>
				<td>DOB</td>
				<td><input type="text" name="dob" /></td>
			</tr>
			<tr>
				<td>Address</td>
				<td><input type="text" name="address" /></td>
			</tr>
			<tr>
				<td>Phone</td>
				<td><input type="text" name="mbno" /></td>
			</tr>
			<tr>
				<td>E-mail</td>
				<td><input type="email" name="mail" /></td>
			</tr>
			<tr>
				<td>UserName</td>
				<td><input type="text" name="uid" /></td>
			</tr>
			<tr>
				<td>Password</td>
				<td><input type="password" name="pwd" /></td>
			</tr>
			<tr>
				<td><input type="submit" value="Register" /></td>
			</tr>
		</table>
	</form>
</body>
</html>