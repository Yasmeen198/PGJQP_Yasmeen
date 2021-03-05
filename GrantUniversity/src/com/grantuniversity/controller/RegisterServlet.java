package com.grantuniversity.controller;

import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.grantuniversity.dao.RegisterDao;
import com.grantuniversity.dao.RegisterDaoImpl;
import com.grantuniversity.model.AddressInfo;

import com.grantuniversity.model.StudentInfo;


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
		String userid,firstname,lastname,gender,dob,phone,email,password,streetNo,lane,city,state;
		int zipCode;
		try {
			userid=request.getParameter("uid");
			firstname=request.getParameter("fname");
			lastname=request.getParameter("lname");
			gender=request.getParameter("gender");
			dob=request.getParameter("dob");
			Date dateOfBirth = new SimpleDateFormat("dd/MM/yyyy").parse(dob);
		    phone=request.getParameter("mbno");
			email=request.getParameter("mail");
			password=request.getParameter("pwd");
			streetNo=request.getParameter("sno");
			lane=request.getParameter("lane");
			city=request.getParameter("city");
			state=request.getParameter("state");
			zipCode=Integer.parseInt(request.getParameter("zip"));
			RegisterDao rdao = new RegisterDaoImpl();
			StudentInfo s = new StudentInfo();
			AddressInfo c=new AddressInfo();
			c.setCity(city);
			c.setLane(lane);
			c.setState(state);
			c.setStreetNo(streetNo);
			c.setZipCode(zipCode);
			
			s.setUserid(userid);
			s.setFirstname(firstname);
			s.setLastname(lastname);
			s.setGender(gender);
			s.setDob(dateOfBirth);
			s.setStudentAddress(c);
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
