package com.newtechbookstore.controller;

import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


import com.newtechbookstore.dao.RegisterDao;
import com.newtechbookstore.dao.RegisterDaoImpl;
import com.newtechbookstore.model.CustomerInfo;


@WebServlet("/Register")
public class RegisterServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public RegisterServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String userid,firstname,lastname,gender,studentAddress,dob,phone,email,password;
		try {
			userid=request.getParameter("uid");
			firstname=request.getParameter("fname");
			lastname=request.getParameter("lname");
			gender=request.getParameter("gender");
			dob=request.getParameter("dob");
			Date dateOfBirth = new SimpleDateFormat("dd/MM/yyyy").parse(dob);
			studentAddress=request.getParameter("address");
		    phone=request.getParameter("mbno");
			email=request.getParameter("mail");
			password=request.getParameter("pwd");
			
			RegisterDao rdao = new RegisterDaoImpl();
			CustomerInfo s = new CustomerInfo();
			
			
			s.setUserid(userid);
			s.setFirstname(firstname);
			s.setLastname(lastname);
			s.setGender(gender);
			s.setDob(dateOfBirth);
			s.setStudentAddress(studentAddress);
			s.setPhone(phone);
			s.setEmail(email);
			s.setPassword(password);
		
			
			if (rdao.register(s)) {
				RequestDispatcher rd = request.getRequestDispatcher("success.jsp");
				rd.forward(request, response);
			} else {
				RequestDispatcher rd = request.getRequestDispatcher("error.jsp");
				rd.forward(request, response);
			}
		} catch (Exception ex) {
			ex.printStackTrace();
		}
			
		}
		
	}
