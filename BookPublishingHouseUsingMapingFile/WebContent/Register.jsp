<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Book Publishing House</title>
</head>
<body>
<center>
		<u><h1>Book Publishing House</h1></u>
	</center>
	<center>
		<u><h2>Register Yourself</h2></u>
	</center>
	<form method="post" action="Register">
		<table>
			<tr>
				<td>Book ID</td>
				<td><input type="text" name="bid" /></td>
			</tr>
			<tr>
				<td>Book Name</td>
				<td><input type="text" name="bname" /></td>
			</tr>
			<tr>
				<td>Author</td>
				<td><input type="text" name="author" /></td>
			</tr>
			<tr>
				<td>Edition</td>
				<td><input type="text" name="edition" /></td>
			</tr>
			<tr>
				<td>Category</td>
				<td><select name="category"><option>Technical</option>
				<option>Novel</option>
				<option>History</option>
				<option>Science</option></select></td>
			</tr>
			<tr>
				<td>Publisher</td>
				<td><input type="text" name="publisher" /></td>
			</tr>
			<tr>
				<td>Publishing Year</td>
				<td><input type="text" name="year" /></td>
			</tr>
			<tr>
				<td>Price</td>
				<td><input type="text" name="price" /></td>
			</tr>
			<tr>
				<td>Quantity</td>
				<td><input type="text" name="quantity" /></td>
			</tr>
			<tr>
				<td><input type="submit" value="submit" /></td>
			</tr>
		</table>
	</form>
</body>
</html>