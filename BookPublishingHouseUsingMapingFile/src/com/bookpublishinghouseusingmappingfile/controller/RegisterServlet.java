package com.bookpublishinghouseusingmappingfile.controller;

import java.io.IOException;


import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.bookpublishinghouseusingmappingfile.dao.RegisterDao;
import com.bookpublishinghouseusingmappingfile.dao.RegisterDaoImpl;
import com.bookpublishinghouseusingmappingfile.model.BookInfo;


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
		int bookID,quantity;
		String bookName,author,edition,category,publisher,publishingYear;
		double price;

		try {
			bookID=Integer.parseInt(request.getParameter("bid"));
			bookName=request.getParameter("bname");
			author=request.getParameter("author");
			edition=request.getParameter("edition");
			category=request.getParameter("category");
		    publisher=request.getParameter("publisher");
			publishingYear=request.getParameter("year");
			price=Double.parseDouble(request.getParameter("price"));
			quantity=Integer.parseInt(request.getParameter("quantity"));
			RegisterDao rdao = new RegisterDaoImpl();
			BookInfo s = new BookInfo();
			
			s.setBookID(bookID);
			s.setBookName(bookName);
			s.setAuthor(author);
			s.setEdition(edition);
			s.setCategory(category);
			s.setPublisher(publisher);
			s.setPublishingYear(publishingYear);
			s.setPrice(price);
			s.setQuantity(quantity);
		
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
