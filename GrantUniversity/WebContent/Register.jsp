<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Grant University</title>
</head>
<body>
<center>
		<u><h1>Grant University</h1></u>
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
				<td>Street No</td>
				<td><input type="text" name="sno" /></td>
			</tr>
			<tr>
				<td>Lane</td>
				<td><input type="text" name="lane" /></td>
			</tr>
			<tr>
				<td>City</td>
				<td><input type="text" name="city" /></td>
			</tr>
			<tr>
				<td>State</td>
				<td><input type="text" name="state" /></td>
			</tr>
			<tr>
				<td>ZipCode</td>
				<td><input type="text" name="zip" /></td>
			</tr>
			<tr>
				<td>Mobile Number</td>
				<td><input type="text" name="mbno" /></td>
			</tr>
			<tr>
				<td>E-mail</td>
				<td><input type="email" name="mail" /></td>
			</tr>
			<tr>
				<td>User ID</td>
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